#include <string>
#include <iostream>

void asterisk(std::string word, std::string &text, int i) {
  // replace discovered key word with an asterisk by iterating
  for (int k = 0; k < word.size(); ++k) {
  
    text[i+k] = '*';
      
  }
  
}

void bleep(std::string word, std::string &text) {
    // iterate through the text and the target word
    
  for (int i = 0; i < text.size(); ++i) {
        
    int match = 0;
        
    for (int j = 0; j < word.size(); ++j) {
      // if the text index sliced from begining 
      std::cout << text[i+j] << "\n";
      if (text[i+j] == word[j]) {
        
        ++match;
        
          
      }
    
    }
        // if we have multiple matches for this particular word in the text then we can assume 
        // the word matches this section of text
    if (match == word.size()) {
            
      asterisk(word, text, i);
        
    }
      
  }
    
}