int findLUSlength(char* a, char* b) {
    int lena= strlen(a);
    int lenb = strlen(b);
    if(lena == lenb)
    {
        if(strcmp(a ,b) ==0 ) return -1;
        else return 3;
    }
    else return lena>lenb?lena:lenb;
 }