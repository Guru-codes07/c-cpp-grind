#include<stdio.h>
// Global scope
int counter = 0; 
int shared_value = 100;

 /* Increments the global counter every time it's called */
void increment_counter(void) 
{
    counter++; 
    printf("[increment_counter] counter is now %d\n", counter);
}

/* Shows a local variable that only lives inside this function */
void local_example(void) 
{
    int local_var = 10;    /* LOCAL scope: only exists here */
    local_var += 5;
    printf("[local_example] local_var = %d\n", local_var);
}

void shadow_example(void) {
    int shared_value = 999;  /* LOCAL variable, shadows the global */
    printf("[shadow_example] local shared_value = %d\n", shared_value);
    printf("[shadow_example] global shared_value is unaffected\n");
}
 
/* Demonstrates block scope: a variable inside {} is local to that block */
void block_scope_example(void) 
{
    int x = 1;
    printf("[block_scope_example] before block, x = %d\n", x);
 
    {
        int x = 42;  /* this x only exists inside these braces */
        printf("[block_scope_example] inside block, x = %d\n", x);
    }
 
    printf("[block_scope_example] after block, x = %d (unchanged)\n", x);
}

int main(void) 
{
    printf("=== Global scope demo ===\n");
    printf("Initial global counter = %d\n", counter);
    increment_counter();
    increment_counter();
    printf("main() can see global counter directly: %d\n\n", counter);
    printf("=== Local scope demo ===\n");
    local_example();
    printf("\n");
    printf("=== Shadowing demo ===\n");
    printf("Global shared_value before call = %d\n", shared_value);
    shadow_example();
    printf("Global shared_value after call  = %d (still unchanged)\n\n", shared_value);
    printf("=== Block scope demo ===\n");
    block_scope_example();
 
    return 0;
}

