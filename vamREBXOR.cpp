#include <stdio.h>
#include <stdlib.h>
#define uint unsigned int
#define allocs(obj) malloc(sizeof(struct obj))
#define allocu(obj) malloc(sizeof(uint)*obj)
#define gc getchar_unlocked
inline void scan(uint *ptr){char c=gc();while(c<33){c=gc();}*ptr=0;while(c>33){*ptr=(*ptr*10)+(c-'0');c=gc();}}

#define _add(idx) b=(x&pows[idx])?1:0;if(node->child[b]==NULL){node->child[b]=(struct Node*)allocs(Node);node->child[b]->child[0]=NULL;node->child[b]->child[1]=NULL;}node=node->child[b];
#define _query(idx) b=(x&pows[idx])?1:0;if(node->child[b^1]==NULL){node=node->child[b];y+=b?pows[idx]:0;}else{node=node->child[b^1];y+=b?0:pows[idx];}

struct Node {
	struct Node* child[2];
};

static uint pows[32] = { 0x80000000, 0x40000000, 0x20000000, 0x10000000, 0x08000000, 0x04000000, 0x02000000, 0x01000000, 0x00800000, 0x00400000, 0x00200000, 0x00100000, 0x00080000, 0x00040000, 0x00020000, 0x00010000, 0x00008000, 0x00004000, 0x00002000, 0x00001000, 0x00000800, 0x00000400, 0x00000200, 0x00000100, 0x00000080, 0x00000040, 0x00000020, 0x00000010, 0x00000008, 0x00000004, 0x00000002, 0x00000001 };

inline uint max(uint x, uint y) {
	return (x > y)?x:y;
}

inline void add(struct Node* node, uint x) {
	int i, b;
	_add(0)
	_add(1)
	_add(2)
	_add(3)
	_add(4)
	_add(5)
	_add(6)
	_add(7)
	_add(8)
	_add(9)
	_add(10)
	_add(11)
	_add(12)
	_add(13)
	_add(14)
	_add(15)
	_add(16)
	_add(17)
	_add(18)
	_add(19)
	_add(20)
	_add(21)
	_add(22)
	_add(23)
	_add(24)
	_add(25)
	_add(26)
	_add(27)
	_add(28)
	_add(29)
	_add(30)
	_add(31)
}

inline uint query(struct Node* node, uint x) {
	uint y = 0;
	int i, b;
	_query(0)
	_query(1)
	_query(2)
	_query(3)
	_query(4)
	_query(5)
	_query(6)
	_query(7)
	_query(8)
	_query(9)
	_query(10)
	_query(11)
	_query(12)
	_query(13)
	_query(14)
	_query(15)
	_query(16)
	_query(17)
	_query(18)
	_query(19)
	_query(20)
	_query(21)
	_query(22)
	_query(23)
	_query(24)
	_query(25)
	_query(26)
	_query(27)
	_query(28)
	_query(29)
	_query(30)
	_query(31)
	return y ^ x;
}

int main() {
	uint n;
	scan(&n);
	uint* arr = (uint*)allocu(n);
	int x, y;
	for (x = 0; x < n; ++x){
		scan(&arr[x]);
	}
	uint* left = (uint*)allocu(n + 1);
	uint* right = (uint*)allocu(n + 1);
	uint* side = left;
	struct Node* root = (struct Node*)allocs(Node);
	root->child[0] = NULL;
	root->child[1] = NULL;
	uint pre = 0;
	add(root, pre);
	side[0] = 0;
	uint i;
	for (i = 0; i < n; ++i) {
		pre ^= arr[i];
		add(root, pre);
		side[i + 1] = max(side[i], query(root, pre));
	}

	side = right;
	root = (struct Node*)allocs(Node);
	root->child[0] = NULL;
	root->child[1] = NULL;
	pre = 0;
	add(root, pre);
	side[n] = 0;
	int j;
	for (j = n - 1; j >= 0; --j) {
		pre ^= arr[j];
		add(root, pre);
		side[j] = max(side[j + 1], query(root, pre));
	}

	uint out = left[1] + right[1];
	for (x = 1; x < n; x++){
		out = max(out, left[x] + right[x]);
	}
	printf("%d\n", out);
	return 0;
}