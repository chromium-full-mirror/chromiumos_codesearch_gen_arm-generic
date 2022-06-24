#ifndef CHROME_KNOWLEDGE_GRAMMAR_GRAMMAR_INTERFACE_H_
#define CHROME_KNOWLEDGE_GRAMMAR_GRAMMAR_INTERFACE_H_

extern "C" {

// Type-safe handle to the grammar checker.
struct GrammarCheckerHandle {};
typedef GrammarCheckerHandle* GrammarChecker;

// Deprecated, kept here for backward compatibility.
void InitGrammarCheckerEnvironment();
typedef decltype(&InitGrammarCheckerEnvironment)
    InitGrammarCheckerEnvironmentFn;

// Creates a grammar checker and returns a handle to it. Also suppresses google3
// INFO and WARNING logging. The checker should be destroyed using
// DestroyGrammarChecker().
GrammarChecker CreateGrammarChecker();
typedef decltype(&CreateGrammarChecker) CreateGrammarCheckerFn;

// Loads the grammar checker model from the specified model paths.
bool LoadGrammarChecker(GrammarChecker checker, const char* paths_data,
                        int paths_size);
typedef decltype(&LoadGrammarChecker) LoadGrammarCheckerFn;

// Check the grammar of input text and generates a set of corrected text and the
// associated scores. Returns true if the recognition was successful, and the
// result is returned in result_data which must be deleted using
// DeleteGrammarCheckerResultData(). Returns false if recognition fails (for
// example the input is empty) and no result_data is returned.
bool CheckGrammar(GrammarChecker checker, const char* request_data,
                  int request_size, char** result_data, int* result_size);
typedef decltype(&CheckGrammar) CheckGrammarFn;

// Deletes result_data returned by CheckGrammar().
void DeleteGrammarCheckerResultData(const char* result_data);
typedef decltype(&DeleteGrammarCheckerResultData)
    DeleteGrammarCheckerResultDataFn;

// Destroys a grammar checker created using CreateGrammarChecker().
void DestroyGrammarChecker(GrammarChecker checker);
typedef decltype(&DestroyGrammarChecker) DestroyGrammarCheckerFn;

}  // extern "C"

#endif  // CHROME_KNOWLEDGE_GRAMMAR_GRAMMAR_INTERFACE_H_
