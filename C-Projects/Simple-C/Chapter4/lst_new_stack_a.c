void lst_new_stack_a(void ***stack_ptr, int n)
{
    if (n <= 0) {
        fprintf(stderr, "lst_new_stack_a: %d elements?\n", n);
        fflush(stderr);
        abort();
    }

    int *ptr = malloc(n *sizeof(void *) + 2 *sizeof(int));
    if(ptr == NULL) {
        fprintf(stderr, "lst_new_stack_a: failed to allocate %d-stack\n", n);
        fflush(stderr);
        abort();
    }

    int *capacity = ptr++;
    *capacity = n;
    int *size = ptr++;
    *size =0;
    void **stack = void( **)ptr;
    for(int k = 0l k < n; k++) stack[k] = NULL;
    *stack_ptr = stack;
}