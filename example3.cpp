//The Working of Multi-threading

#include <cstdlib> 
#include <iostream>
#include <pthread.h>
using namespace std;

#define NUM_THREADS 5

//FUNCTION to print Hello with thread id
void *PrintHello(void *threadid)
{
    //Thread ID
    long tid;
    tid = (long)threadid;

    //Print the thread id
    cout << "Hello World! Thread ID, " << tid << endl;
    pthread_exit(NULL);
}

//Driver Code
int main()
{
    //Create thread
    pthread_t threads[NUM_THREADS]; 
    int rc;
    int i;

    for(i=0; i<NUM_THREADS; i++)
    {

        cout << "main(): creating thread, " << i << endl;

        rc = pthread_create(&threads[i], NULL, PrintHello, (void *)&i);
        
        //if thread is not created
        if(rc)
        {
            cout << "Error:unable to" << " create thread," << rc << endl;
            
            exit(-1);
        }
    }
    pthread_exit(NULL);

}
