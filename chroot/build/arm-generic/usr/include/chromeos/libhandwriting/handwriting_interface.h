#ifndef CHROME_KNOWLEDGE_HANDWRITING_HANDWRITING_INTERFACE_H_
#define CHROME_KNOWLEDGE_HANDWRITING_HANDWRITING_INTERFACE_H_

extern "C" {

// Type-safe handle to the handwriting recognizer.
struct HandwritingRecognizerHandle {};
typedef HandwritingRecognizerHandle* HandwritingRecognizer;

// Creates a handwriting recognizer and returns a handle to the recognizer. Also
// suppresses google3 INFO and WARNING logging. The recognizer should be
// destroyed using DestroyHandwritingRecognizer().
HandwritingRecognizer CreateHandwritingRecognizer();
typedef decltype(&CreateHandwritingRecognizer) CreateHandwritingRecognizerFn;

// Loads the recognizer from the specified model and data file paths. Also
// initializes the recognizer and runs a dummy example to warm up the
// recognizer.
bool LoadHandwritingRecognizer(HandwritingRecognizer recognizer,
                               const char* options_data, int options_size,
                               const char* paths_data, int paths_size);
typedef decltype(&LoadHandwritingRecognizer) LoadHandwritingRecognizerFn;

// Recognizes handwritten text and generates a set of candidate recognition text
// and the associated scores. Returns true if the recognition was successful,
// and the result is returned in result_data which must be deleted using
// DeleteHandwritingResultData(). Returns false if recognition fails (for
// example the input is empty) and no result_data is returned.
bool RecognizeHandwriting(HandwritingRecognizer recognizer,
                          const char* request_data, int request_size,
                          char** result_data, int* result_size);
typedef decltype(&RecognizeHandwriting) RecognizeHandwritingFn;

// Deletes result_data returned by RecognizeHandwriting().
void DeleteHandwritingResultData(const char* result_data);
typedef decltype(&DeleteHandwritingResultData) DeleteHandwritingResultDataFn;

// Destroys a handwriting recognizer created using
// CreateHandwritingRecognizer().
void DestroyHandwritingRecognizer(HandwritingRecognizer recognizer);
typedef decltype(&DestroyHandwritingRecognizer) DestroyHandwritingRecognizerFn;

}  // extern "C"

#endif  // CHROME_KNOWLEDGE_HANDWRITING_HANDWRITING_INTERFACE_H_
