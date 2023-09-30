cmake_minimum_required(VERSION 3.26)
project(dsa C)

set(CMAKE_C_STANDARD 17)

add_executable(dsa main.c
        src/customds/stack/stack.c
        src/customds/stack/stack.h
        src/customds/stack/test_stack.c
        src/customds/queue/queue.c
        src/customds/queue/queue.h
        src/customds/queue/test_queue.c
        src/customds/linkedlist/linked_list.c
        src/customds/linkedlist/linked_list.h
        src/customds/linkedlist/test_linked_list.c)
