/*
 * Given a input string, reverse the word by word
 * Input: I must learn Deustch
 * Output: Deustch learn must I
 */

#include <iostream>
#include <string>

using namespace std;
void reverse(char* first, char* last){
    char temporary;
    
    while(first<last){
        temporary=*first;
        *first++=*last;
        *last--=temporary;
    }
}
void reverseword(char* input)
{
    char* begin=input;
    char* temporary=input;
    
    while(*temporary)
    {
        temporary++;
        
        if (*temporary=='\0')
            {
                reverse(begin, temporary-1);
    }
    else if(*temporary ==' ')
    {
        reverse(begin, temporary-1);
        begin=temporary+1;
    }
}
reverse (input, temporary-1);
}
int main()
{
	char input[]="I must learn Deustch";
    char* temporary= input;
    reverseword(input);
    cout<<"output: "<<input<<endl;
    getchar();
    
}
