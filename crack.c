#include<unistd.h>
#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<crypt.h>
int main(int argc,string argv[])
{
    if(argc!=2)
    {
    printf("usage:./crack hash\n");
    return 1;
    }
    string alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char password[5]="\0";
    string hash =argv[1];
    char salt[3];
    memcpy(salt ,hash,2);
    salt[2]='\0';
    bool fatouma=false;
    int alpha=52;

    for (int i=0;i<alpha;i++)
    {
        password[0]=alphabet[i];
        password[1]=password[2]=password[3]=password[4]='\0';
        if(!strcmp(hash,crypt(password,salt)))
        {
            fatouma =true;return true;
            break;

        }
        for(int k=0;k<alpha;k++)
        {
            password[2]=alphabet[k];
            password[3]=password[4]='\0';
            if(!strcmp(hash,crypt(password,salt)))
            {
                fatouma=true; return true;
                break;
                {
                    for(int l=0;l<alpha;l++)
                    password[3]=alphabet[1];
                    password[4]='\0';
                    if(!strcmp(hash,crypt(password,salt)))
                    {
                        fatouma=true ;return true;
                        break;
                        {
                            for(int m=0;m<alpha;m++)
                            {
                                password[4]=alphabet[m];
                                if(!strcmp(hash,crypt(password,salt)))
                                {
                                    fatouma=true;return true;
                                    break;
                                    {
                                        if(fatouma)
                                        break;

                                        {
                                            if(fatouma)
                                            break;
                                            {
                                                if(fatouma)
                                                break;
                                                {
                                                    if (fatouma)
                                                    break;
                                                }
                                                {
                                                    if(fatouma)
                                                    break;
                                                    {
                                                        printf("password:%s\n",password);
                                                    }
                                                }
                                            }
                                        }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

