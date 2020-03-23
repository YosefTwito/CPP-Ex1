#include "PhoneticFinder.hpp"
#include <iostream>
using namespace std;

namespace phonetic {
	string find(string text, string word) {
		if ((word == "") || (word == " ")) { throw std::invalid_argument( "Can't find the word in the text !" ); }
		string ans;
		int index=0;
		for (int i=0; i<text.length(); i++){
			//if (i<word.length()) cout << word[i];
			if (tolower(word[index]) == tolower(text[i])){
				ans+=text[i];
				index++;
				if (index == word.length()){
					if (i+1 == text.length()){ return ans; }
					else if (text[i+1] == ' ') { return ans; }
					else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
				}
			}
			else if(tolower(word[index]) == 'v'){
				if (tolower(text[i]) == 'w'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'w'){
				if (tolower(text[i]) == 'v'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'b'){
				if ((tolower(text[i]) == 'f') || (tolower(text[i]) == 'p')){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'f'){
				if ((tolower(text[i]) == 'b') || (tolower(text[i]) == 'p')){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'p'){
				if ((tolower(text[i]) == 'f') || (tolower(text[i]) == 'b')){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'g'){
				if (tolower(text[i]) == 'j'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'j'){
				if (tolower(text[i]) == 'g'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'c'){
				if ((tolower(text[i]) == 'k') || (tolower(text[i]) == 'q')){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'k'){
				if ((tolower(text[i]) == 'q') || (tolower(text[i]) == 'c')){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'q'){
				if ((tolower(text[i]) == 'c') || (tolower(text[i]) == 'k')){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 's'){
				if (tolower(text[i]) == 'z'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'z'){
				if (tolower(text[i]) == 's'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'd'){
				if (tolower(text[i]) == 't'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 't'){
				if (tolower(text[i]) == 'd'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'o'){
				if (tolower(text[i]) == 'u'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'u'){
				if (tolower(text[i]) == 'o'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'i'){
				if (tolower(text[i]) == 'y'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' ') { return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else if(tolower(word[index]) == 'y'){
				if (tolower(text[i]) == 'i'){
					ans+=text[i];
					index++;
					if (index == word.length()){
						if (i+1 == text.length()){ return ans; }
						else if (text[i+1] == ' '){ return ans; }
						else {
							ans.clear();
							index=0;
							while ((text[i+1] != ' ') && (i+1!=text.length())) { i++; }
						}
					}
				}
				else {
					ans.clear();
					index=0;
				}
			}
			else{
				ans.clear();
				index=0;
			}
		}
		throw std::invalid_argument( "Can't find the word in the text !" );
		return "--Bug--";
	}
}
