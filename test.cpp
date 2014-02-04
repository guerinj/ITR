#include <iostream>
#include <pthread.h>

struct ProtCount {
  double count;
  pthread_mutex_t mutex;
};

void* my_func(void* args) {
	std::cout << "prout " << std::endl;
  volatile double* count = (volatile double*) args;
  
  for(int i=0;i<1000000;i++) {
    pthread_mutex_lock
    (*count)++;
  }
}

int main() {
  pthread_t thread1, thread2, thread3;  
  double count = 0.0;
  pthread_mutex_t *mutex;
  pthread_mutexattr_t attributes;

  ProtCount protCount;
  protCount = 0.0;

  pthread__mutex_init(&protCount.mutew, NULL);  
  

  pthread_create(&thread1, NULL, my_func, &count, mutex);
  pthread_create(&thread2, NULL, my_func, &count, mutex);
  pthread_create(&thread3, NULL, my_func, &count, mutex);

  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
  pthread_join(thread3, NULL);
  std::cout << "hello" << std::endl;
  std::cout << "count:" << count << std::endl;
  return 0;
}
