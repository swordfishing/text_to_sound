#include <stdio.h>
#include <windows.h>
#define A 440
#define B 493.88
#define C 261.63
#define D 293.66
#define E 329.63
#define F 349.23
#define G 392

void sound(int len,char text[len],int BPM)
{
int time = 60000/BPM;
char *p = text;
do{
    if(*p=='A') Beep(A,time);
    if(*p=='B') Beep(B,time);
    if(*p=='C') Beep(C,time);
    if(*p=='D') Beep(D,time);
    if(*p=='E') Beep(E,time);
    if(*p=='F') Beep(F,time);
    if(*p=='G') Beep(G,time);
    p++;
}
while(*p != '\0');
}

int main(){
    int length,bpm;
    char temp[1000];
    printf("Enter the text:");
    scanf("%s",temp);
    length=sizeof(temp)/sizeof(char);
    printf("Enter BPM: ");
    scanf("%d",&bpm);

    sound(length,temp,bpm); 

}