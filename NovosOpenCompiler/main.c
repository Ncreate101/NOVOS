#include <stdio.h>
#include "datatypes.h"
#include "tokens.h"
#include <string.h>

char target;
char targetstr[];
int tokenflags;

const char* header() {
    char ss[strlen(targetstr) - 1];
    int i;
    for(i=1; i<strlen(targetstr); i++)
    {
        ss[i] = targetstr[i];
    }
    return ss;
}

int main(void) {

    scanf("%s", targetstr);
    target = targetstr[0];

    // Detects Tokens
    switch (target)
    {
    case SECT_DECLARATOR:
        tokenflags = 0;
        break;

    case SECT_CONTAINER_LEFT:
        tokenflags = 1;
        break;

    case SECT_CONTAINER_RIGHT:
        tokenflags = 2;
        break;

    case LINEAR_TERMENATOR:
        tokenflags = 3;
        break;

    case ARG_SPACER:
        tokenflags = 4;
        break;

    case ARRAY_LEFT:
        tokenflags = 5;
        break;

    case ARRAY_RIGHT:
        tokenflags = 6;
        break;

    case COMMA:
        tokenflags = 7;
        break;

    case CHILD:
        tokenflags = 8;
        break;

    case PARAMS_LEFT:
        tokenflags = 9;
        break;

    case PARAMS_RIGHT:
        tokenflags = 10;
        break;

    case STRING:
        tokenflags = 11;
        break;

    case ALU_ADD:
        tokenflags = 12;
        break;

    case ALU_SUB:
        tokenflags = 13;
        break;

    case ALU_MUL:
        tokenflags = 14;
        break;

    case ALU_DIV:
        tokenflags = 15;
        break;

    case ALU_MOD:
        tokenflags = 16;
        break;

    case ALU_ADD:
        tokenflags = 17;
        break;

    case ALU_OR:
        tokenflags = 18;
        break;

    case ALU_NOT:
        tokenflags = 19;
        break;
    
    case ASM_OPERATOR:
        tokenflags = 20;

    case CMT_SINGLELINE:
        tokenflags = 21;
             
    default:
        tokenflags = 255;
        break;
    };
    printf("%i\n", tokenflags);
}