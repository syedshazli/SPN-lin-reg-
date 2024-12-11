#include <iostream>
#include <stdio.h>
#include <pthread.h>
using namespace std;

void* thread_function(void* arg) {
    int* num = static_cast<int*>(arg);
    printf("Hello from thread %d!\n", *num);
}

int main(){

    int numThreads = 6;
    pthread_t threads[numThreads];

    for(int i = 0; i <numThreads; i++ ){
        int* threadArg = new int(i);
        pthread_create(&threads[i], nullptr, thread_function, threadArg);
    }

    for(int i = 0; i<numThreads; i++){
        pthread_join(threads[i], nullptr);
    }
    cout<<"Done!"<<endl;
}
