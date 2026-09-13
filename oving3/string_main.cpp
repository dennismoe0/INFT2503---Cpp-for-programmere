#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::string word1;
  std::string word2;
  std::string word3;

  // a) les inn 3 ord fra brukeren.
  std::cin >> word1;
  std::cin >> word2;
  std::cin >> word3;

  std::string sentence = word1 + " " + word2 + " " + word3 + ".";

  std::cout << "Lengde på ord 1:" << word1.length() << "\n"
            << std::endl;
  std::cout << "Lengde på ord 2:" << word2.length() << "\n"
            << std::endl;
  std::cout << "Lengde på ord 3:" << word3.length() << "\n"
            << std::endl;
  std::cout << "Lengde på hele setningen:" << sentence.length() << "\n"
            << std::endl;

  std::string sentence2 = sentence;
  if (sentence2.length() < 13)
  {
    std::cout << "Sentence is too short to replace char 10-12" << "\n";
  }
  else
  {
    sentence2.replace(10, 3, "xxx");
  }
  // test
  std::cout << sentence << std::endl;
  std::cout << sentence2 << std::endl;

  if (sentence.length() < 5)
  {
    std::cout << "Setningen er for kort\n";
  }
  else
  {
    std::string sentence_start = sentence.substr(0, 5);
    std::cout << sentence << "\n";
    std::cout << sentence_start << "\n";
  }
  std::string substring = "hallo";
  if (sentence.find(substring) != std::string::npos)
  {
    std::cout << "Sentence DOES contains " << substring << ".\n"
              << std::endl;
  }
  else
  {
    std::cout << "Sentence DOES NOT contains " << substring << ".\n"
              << std::endl;
  }

  std::vector<std::size_t> positions;
  std::string string_to_find = "er";
  // search begins at index 0 in the sentence,
  // finds first occurrence of "er"
  std::size_t pos = sentence.find(string_to_find, 0);
  // npos = mega large unrealistic number meaning not present
  // so as long as it exists do this
  while (pos != std::string::npos)
  {
    positions.push_back(pos); // add an instance
    // Do it again, move one forward to stop looping
    pos = sentence.find(string_to_find, pos + 1);
  }
  for (std::size_t index : positions)
  {
    std::cout << index << "\n";
  }
  std::cout << "Antall ganger " << string_to_find << "forekommer i setningen:" << positions.size() << ".\n"
            << std::endl;
}