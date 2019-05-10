#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<mmsystem.h>
int main (int argc,char *argv[])
{
    playsound("son.wav",NULL,SND_FILENAME | getchar());
    return 0;
}
