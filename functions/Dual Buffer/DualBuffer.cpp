#include <pthread.h>
// producer consumer problem
// double buffering is pipelining

//inside a thread for generating data, 
    //put random numbers in the buffer
    //use a mutex to wait for the consumer to finish consuming numbers you put in
    //swap vectors/their data using .swap
    //"consumer finished processing data, now give them our new data to process and now generate new data in the consumers buffer"
void Generate_Data(){}

void Process_Data(){ }

int main(){
    
}
