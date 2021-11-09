#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int queue[1000];
int head = -1, tail = -1;	// 데이터 추가는 tail, 삭제는 head

void push(int data) {
	queue[++tail] = data;
}

int pop() {		// 맨 앞 데이터 삭제
	int x = queue[++head];
		return x;
}


int findmax() {
	int max = 0;
	for (int j = head + 1; j < tail + 1; j++) {
		if (max < queue[j])
			max = queue[j];
	}
	return max;
}

// head+1은 맨 앞 데이터를 가리키고, tail은 맨 뒤 데이터를 가리킴

int main(void) {
	int t = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		head = -1;
		tail = -1;
		int cnt = 1;
		int n, m = 0;
		scanf("%d %d", &n, &m);

		for (int j = 0; j < n; j++) {
			int x = 0;
			scanf("%d", &x);
			push(x);
		}
		

		while (1) {
			int max = findmax();

			if (m == head + 1 && max == queue[m])
				break;

			if (queue[head + 1] >= max) {
				pop();
				cnt++;
			}
			else {	// 문서를 가장 뒤로 재배치
				if (m == head + 1)	// m이 맨 앞인데 뒤에 중요도가 더 높은 문서가 있을 때
					m = tail + 1;
				queue[++tail] = queue[++head];
			}
			
		}

		printf("%d\n", cnt);
	}

}