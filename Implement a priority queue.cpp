int pop(vector<int> &heap)
{
   if (heap.empty()) {

            return -1;

        }

        int size = heap.size();
        int ans = heap[0];

        heap[0] = heap[size - 1];
        heap.pop_back();

        size--;

        int i = 0;

        while (i < size) {

            int largest = i;
            int li = 2 * i + 1;
            int ri = 2 * i + 2;

            if (li < size && heap[li] > heap[largest]) {

                largest = li;

            }

            if (ri < size && heap[ri] > heap[largest]) {

                largest = ri;

            }

            if (i != largest) {

                swap(heap[i], heap[largest]);

                i = largest;

            } else {

                return ans;

            }

        }
        return ans;

} 
