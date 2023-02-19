#include <stdio.h>
#include <algorithm>
#define NMAX 2010
using namespace std;
 
int M, N;
int inp[NMAX][NMAX];
 
int ret;
int store[NMAX][NMAX], print[NMAX][NMAX];
 
int main() {
    scanf("%d %d", &M, &N);
    for(int i=1;i<=M;i++) {
        for(int j=1;j<=N;j++) {
            scanf("%1d", &inp[i][j]);
        }
    }
 
    for(int j=1;j<=N;j++) {
        for(int i=1;i<=M;i++) {
            
            // (i-1, j-1), (i, j-1), (i+1, j-1)값 비교
            for(int k=-1;k<=1;k++) store[i][j] = max( store[i][j], print[i+k][j-1] );
            print[i][j] = store[i][j] + inp[i][j];
 
            // 저장된 값 중 최댓값
            ret = max( ret, store[i][j] );
        }
    }
 

    printf("%d", ret);

    return 0;
}