#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i = n ; i > 0 ; i = i / 10)
        answer = answer + (i % 10);
    return answer;
}
