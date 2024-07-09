#include <iostream>
#include <string>

using namespace std;

int main() {
  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key{"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzACDEFGHIJKLM"};

  // my solution
  string message{};
  cout << "Enter the message to encrypt: ";
  getline(cin, message);

  string encrypted{};
  for (size_t i = 0; i < message.length(); ++i) {
    for (size_t j = 0; j < alphabet.length(); ++j) {
      if (message.at(i) == alphabet.at(j)) {
        encrypted.push_back(key.at(j));
      }
    }
  }
  cout << "This is the encrypted message: " << encrypted << endl;

  string encrypted_message{};
  cout << "-------------------------------" << endl;
  cout << "Enter the message to decrypt: ";
  getline(cin, encrypted_message);

  string decrypted{};
  for (size_t i = 0; i < encrypted_message.length(); ++i) {
    for (size_t j = 0; j < key.length(); ++j) {
      if (encrypted_message.at(i) == key.at(j)) {
        decrypted.push_back(alphabet.at(j));
      }
    }
  }
  cout << "This is the decrypted message: " << decrypted << endl;

  // course solution
  // string message{};
  // cout << "Enter the message to encrypt: ";
  // getline(cin, message);
  //
  // string encrypted{};
  // for(char c: message){
  //   size_t position = alphabet.find(c);
  //   if(position != string::npos){
  //     char new_char{key.at(position)};
  //     encrypted += new_char;
  //   }
  //   else {
  //     encrypted += c;
  //   }
  // }
  // cout << "This is the encrypted message: " << encrypted << endl;
  //
  // string decrypted_message{};
  // for(char c: encrypted) {
  //   size_t position = key.find(c);
  //   if(position != string::npos) {
  //     char new_char{alphabet.at(position)};
  //     decrypted_message += new_char;
  //   }
  //   else {
  //     decrypted_message += c;
  //   }
  // }
  // cout << "This is the decrypted message: " << decrypted_message << endl;

  cout << endl;
  return 0;
}
