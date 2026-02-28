typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_403fe8;

void _init(void)
{
    if (g_403fe8)
        g_403fe8();
    return;
}

extern unsigned long long g_403fc8;
extern unsigned long long g_403fd0;

void sub_401020(void)
{
    unsigned long v0;  // [bp-0x8]

    v0 = g_403fc8;
    goto g_403fd0;
}

void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long v0;  // [bp+0x0]
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v0 = v3;
    __libc_start_main(main, v1, &v2, __libc_csu_init, __libc_csu_fini, a2, &v1, v3); /* do not return */
}

void sub_40106e(void)
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198510()
}


void deregister_tm_clones(void)
{
    return;
}


void register_tm_clones(void)
{
    return;
}

extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_403ff8;

void __do_global_dtors_aux(void)
{
    if (__TMC_END__)
        return;
    if (g_403ff8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __TMC_END__ = 1;
    return;
}

void frame_dummy(void)
{
    register_tm_clones();
    return;
}

unsigned int main(unsigned long a0, unsigned long a1)
{
    return 549698;
}

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

extern struct_0 __init_array_start;

void __libc_csu_init(unsigned int a0, unsigned long a1, unsigned long a2)
{
    unsigned long long flag;  // rbx

    _init();
    flag = 0;
    do
    {
        (&__init_array_start.field_0)[flag](a0, a1, a2);
        flag += 1;
    } while (flag != 1);
    return;
}

void __libc_csu_fini(void)
{
    return;
}

void _fini(void)
{
    return;
}

