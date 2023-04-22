/*数组
 * 存储一组数据，一组相同类型的元素
 * int arr[5]={0,1,2,3,4};
 * 数组的下标从0开始
 * char ch[] .字符数组
 * double d[] 。浮点数数组
 */


/*内置的数据类型：char short long int ……
 * 局部变量的作用域是局部变量所在的局部范围
 * 局部变量和全局变量名字相同的情况下，局部优先
 *
 * IO型，所有代码都是自己来实现和完成的，输入计算输出
 * 接口型，只需要完成一个函数，假设其他需要的数据都是准备好的
 *
 * 字符串的结束标志\0。0的ASCII是48.\0是0
 *
 * EOF  end of  file.文件的结束表示，-1
 *
 * 字符串里才有\0。整型数组没有
 * char arr[]={'a''e''q'}.strlen(arr)是个随机值，因为最后没有\0
 * char arr[4]={'a''e''q'}. strlen(arr)是3，不完全初始化，少的哪一个默认为0，【8】也是3，只要大于【3】都是3
 *
 * c99之前，【】数组的大小都是常量或者常量表达式
 * c99之后，【】支持变长数组，允许数组的大小是变量，但是这种指定方式的数组        不能初始化
 * c99：可以int m = 100    arr【m】.但是后面不能写={}。
 *
 */