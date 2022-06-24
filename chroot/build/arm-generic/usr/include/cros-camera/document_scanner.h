#ifndef CHROMEOS_CAMERA_LIB_DOCUMENT_SCANNING_DOCUMENT_SCANNER_H_
#define CHROMEOS_CAMERA_LIB_DOCUMENT_SCANNING_DOCUMENT_SCANNER_H_

#include <cstdint>
#include <memory>
#include <vector>

namespace chromeos_camera {
namespace document_scanning {

// The base class which will also be used in CrOS ML Service. Since the
// implementation will be compiled as a .so library and loaded in ML service
// dynamically, we make all the class functions pure virtual here.
class DocumentScanner {
 public:
  virtual ~DocumentScanner() = default;

  // Both data ranges are in [0, 1).
  struct Point {
    float x;
    float y;
  };

  enum class Rotation : uint32_t {
    ROTATION_0 = 0,
    ROTATION_90 = 1,
    ROTATION_180 = 2,
    ROTATION_270 = 3,
  };

  // Detects the corners of a document from the given NV12 image which is in
  // size of 256x256.
  virtual bool DetectCornersFromNV12Image(const uint8_t* nv12_image,
                                          std::vector<Point>* corners) = 0;

  // Detects the corners of a document from the given JPEG image.
  virtual bool DetectCornersFromJPEGImage(const uint8_t* jpeg_image,
                                          uint32_t image_size,
                                          std::vector<Point>* corners) = 0;

  // Does post processing on the given document JPEG image based on the given
  // corners. The |rotation| is the rotation degrees for clockwise rotating the
  // document image.
  virtual bool DoPostProcessingFromJPEGImage(
      const uint8_t* jpeg_image, uint32_t image_size,
      const std::vector<Point>& corners, Rotation rotation,
      std::vector<uint8_t>* processed_jpeg_image) = 0;
};

extern "C" {

std::unique_ptr<DocumentScanner> CreateDocumentScanner(float score_threshold);
typedef decltype(&CreateDocumentScanner) CreateDocumentScannerFn;

}  // extern "C"

}  // namespace document_scanning
}  // namespace chromeos_camera

#endif  // CHROMEOS_CAMERA_LIB_DOCUMENT_SCANNING_DOCUMENT_SCANNER_H_
