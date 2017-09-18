#pragma once
#include <cassert>

template <typename Item>
class heap
{

private:
	Item *data;
	int count;
	int capacity;

	void shiftUp(int k) {
		while (k > 1 && data[k / 2] < data[k]) {
			swap(data[k / 2], data[k]);
			k /= 2;
		}
	}

	void shiftDown(int k) {
		while (2 * k <= count)
		{
			int j = 2 * k;//�ڴ���ѭ���У�data[k]��data[j]����λ��
			if (j+1<=count && data[j+1] > data[j])
			{
				j++;
			}
			if (data[k] >= data[j]) break;
			swap(data[k], data[j]);
			k = j;
		}
	}


public:
	heap(int capacity)
	{
		//���캯��������һ���ն�,����capacity��Ԫ��
		data = new Item[capacity + 1];
		count = 0;
		this->capacity = capacity;
	}
	~heap()
	{
		delete[] data;
	}


	int size() {
		return count;
	}

	bool isEmpty() {
		return count == 0;
	}

	//�����������һ����Ԫ��
	void insert(Item item) {
		assert(count + 1 <= capacity);
		data[count + 1] = item;
		shiftUp(count + 1);
		count++;
	}

	//�׳�����������Ԫ��
	Item extractMax() {
		assert(count > 0);
		Item ret = data[1];

		swap(data[1], data[count]);
		count--;
		shiftDown(1);
		return ret;
	}

	Item getMax() {
		assert(count > 0);
		return data[1];
	}
};

