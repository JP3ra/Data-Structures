#include<iostream>
using namespace std;

int length(char str[]){
    int count = 0;
    int i = 0;
    while(str[i]!='\0'){
        count++;
        i++;
    }

    return count;
}

void reverse(char &str[], int size){
    int s =0;
    int e = size-1;

    while(s<e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
    cout<<str<<endl;
}
int main(){

    char str[200] = "Panda";
    int size = length(str);
    cout<<size<<endl;

    reverse(*str, size);

    cout<<reverse<<endl;

    return 0;
}