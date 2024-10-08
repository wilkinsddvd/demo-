//(1)拉链法 邻接表
// h[] 存储头指针 初始化为-1 
// e[] 存储节点的值 
//ne[] 存储下一个元素的指针

int h[N],e[N],ne[N],idx;

// 向哈希表中插入一个数

void insert(int x){
	//这样写是防止x为负数
	int k = (x%N+N)%N;
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++;
} 

// 在哈希表中查询某个数是否存在

bool find(int x){
	int k = (x%N+N)%N;
	for(int i=h[k];i != -1;i = ne[i])
		if(e[i] == x)
			return true;
	return false;
} 

//（2）开放寻址法

int h[N];

//如果x在哈希表里 返回x的下标 如果x不再哈希表中 返回x应该插入的位置

int find(int x){
	int t = (x%N+N)%N;
	while(h[t] != NULL && h[t] != x){
		t++;
		if(t==N) t = 0;
	}
	return t;
} 

