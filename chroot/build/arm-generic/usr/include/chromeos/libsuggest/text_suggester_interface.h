#ifndef CHROME_KNOWLEDGE_SUGGEST_TEXT_SUGGESTER_INTERFACE_H_
#define CHROME_KNOWLEDGE_SUGGEST_TEXT_SUGGESTER_INTERFACE_H_

extern "C" {

// Type-safe handle to a text suggester
struct TextSuggesterHandle {};
typedef TextSuggesterHandle* TextSuggester;

// Creates a text suggester and returns a handle to it. The suggester should be
// destroyed using DestroyTextSuggester().
TextSuggester CreateTextSuggester();
typedef decltype(&CreateTextSuggester) CreateTextSuggesterFn;

// Initializes the TextSuggester with the given settings.
bool LoadTextSuggester(TextSuggester suggester, const char* settings_data,
                       int settings_size);
typedef decltype(&LoadTextSuggester) LoadTextSuggesterFn;

// Generate suggestion candidates and their associated score for the given
// suggestion context. Returns true if the candidate generation was successful,
// and the result is returned in result_data which must be deleted using
// DeleteSuggestionResultData(). Returns false if candidate generation fails and
// no result_data is returned.
bool SuggestCandidates(TextSuggester suggester, const char* request_data,
                       int request_size, char** const result_data,
                       int* const result_size);
typedef decltype(&SuggestCandidates) SuggestCandidatesFn;

// Deletes result_data returned by SuggestCandidates().
void DeleteSuggestCandidatesResultData(const char* result_data);
typedef decltype(&DeleteSuggestCandidatesResultData)
    DeleteSuggestCandidatesResultDataFn;

// Destroys a text suggester created using CreateTextSuggester().
void DestroyTextSuggester(TextSuggester suggester);
typedef decltype(&DestroyTextSuggester) DestroyTextSuggesterFn;

}  // extern "C"

#endif  // CHROME_KNOWLEDGE_SUGGEST_TEXT_SUGGESTER_INTERFACE_H_
