# Arrays : Linear Data structure
# contigous memory allocation
# benefit: Random Access
# disadvantage: 
# int: 4bytes/8bytes
# Assume int takes 4 bytes
{00000000 0000000 0000000 00000001} {00000000 0000000 0000000 0000010 }
xxxxx100  xxxx101 xxxx102 xxxx103   xxxx104
      0  1  2  3  4
arr:  1 ,2, 3, 4, 5
    *arr 
    *{100, 101,102,103} --> 1
    component: index, value


    *(100+ 4*index) 
    index:0, *(100) --> 1
    index:1, *(100+4*1) --> 2
    Assume: size of array is greater than n
    index:n, *(100+4*n) --> v


{100 101 102 103} ......  {500 501 502 503}

stack memory // A particular section in RAM
code memory //
Heap memory //

Dynamic array: arrays grows automatically by twice the size of original array if capacity is reached



