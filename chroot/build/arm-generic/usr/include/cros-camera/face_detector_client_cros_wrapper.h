#ifndef CHROMEOS_CAMERA_LIB_FACESSD_FACE_DETECTOR_CLIENT_CROS_WRAPPER_H_
#define CHROMEOS_CAMERA_LIB_FACESSD_FACE_DETECTOR_CLIENT_CROS_WRAPPER_H_

#include <string>
#include <vector>

namespace human_sensing {

class FaceDetectorTfliteClient;

// Face bounding box, pixels.
// (x1, y1): top left corner; (x2, y2): bottom right corner;
struct BoundingBox {
  float x1, y1, x2, y2;
};

struct Landmark {
  // From proto definition: photos/vision/human_sensing/proto/face.proto.
  enum class Type {
    kLeftEye = 0,
    kRightEye = 1,
    kNoseTip = 9,
    kMouthCenter = 45,
    kLeftEarTragion = 240,
    kRightEarTragion = 241,
    kLandmarkUnknown = 15000,
  };

  // (x, y) is the pixel coordinate of the landmark. z is reserved and is
  // currently always set to 0.
  float x = 0.0f, y = 0.0f, z = 0.0f;
  float confidence = 0.0f;
  Type type = Type::kLandmarkUnknown;
};

struct CrosFace {
  BoundingBox bounding_box;
  // The confidence score should be in range [0.0, 1.0] and high score
  // indicates high confidence.
  float confidence;
  std::vector<Landmark> landmarks;

  // Roll, pan and tilt angles in range [-180, 180].
  float roll_angle = 0.0f;
  float pan_angle = 0.0f;
  float tilt_angle = 0.0f;
};

class FaceDetectorClientCrosWrapper {
 public:
  FaceDetectorClientCrosWrapper();
  ~FaceDetectorClientCrosWrapper();

  // Returns true if initialize successfully.
  bool Initialize(
      const std::string& model_file, const std::string& anchor_file,
      float score_threshold);

  // Returns true if detecting faces successfully even there is no face.
  // |data| is the address of Y plane of YCbCr color space.
  bool Detect(
      const uint8_t* data, int width, int height,
      std::vector<CrosFace>* cros_faces);

 private:
  std::unique_ptr<FaceDetectorTfliteClient> client_;
};

}  // namespace human_sensing

#endif  // CHROMEOS_CAMERA_LIB_FACESSD_FACE_DETECTOR_CLIENT_CROS_WRAPPER_H_
