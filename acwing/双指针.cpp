for(int i=0,j=0;i<n;i++)
{
	while(j<1 && check(i,j)) j++;
}
//常见问题分类：
// (1) 对于一个序列，用两个指针维护一段区间
// (2) 对于两个序列，维护某种次序，比如归并排序中合并两个有序序列的操作
 
