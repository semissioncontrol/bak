#include <stdio.h>
#include <memory.h>

int main(int argc, char** argv) {
    char    buff[BUFSIZ];
    FILE    *in, *out;
    size_t  n;

    char dest[40] = "/semc/coreutils/bak/";
    strcat(dest, argv[1]);
    strcat(dest, ".semc.bak");
    printf(dest);


    in = fopen( argv[1], "rb" );
    out= fopen( dest, "wb" );
    while ( (n=fread(40,1,BUFSIZ,in)) != 0 ) {
        fwrite( buff, 1, n, out );
    }

    return 0;
}
