/**@brief ring buffer测试程序，创建两个线程，一个生产者，一个消费者。
 * 生产者每隔1秒向buffer中投入数据，消费者每隔2秒去取数据。
 *@atuher Anker  date:2013-12-18
 * */
#include "ring_buffer.h"
#include <pthread.h>
#include <time.h>

#define BUFFER_SIZE  512//1024 

typedef struct student_info
{
    uint64_t stu_id;
    uint32_t age;
    uint32_t score;
}student_info;


void print_student_info(const student_info *stu_info)
{
    assert(stu_info);
    printf("id:%lu\t",stu_info->stu_id);
    printf("age:%u\t",stu_info->age);
    printf("score:%u\n",stu_info->score);
}

student_info * get_student_
