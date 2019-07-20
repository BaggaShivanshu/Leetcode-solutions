// Find Median from Data Stream
class MedianFinder {
    private:
    priority_queue <int> maxHeap; 
    priority_queue <int, vector<int>, greater<int> > minHeap; 
    double medianSoFar;
public:
    /** initialize your data structure here. */
    MedianFinder() {
        medianSoFar = 0.0; 
    }
    
    void addNum(int currentNum) {
        if(maxHeap.size() > minHeap.size())
        {
            if(currentNum < medianSoFar)
            {
                int x = maxHeap.top();
                maxHeap.pop();
                minHeap.push(x);
                maxHeap.push(currentNum);
            }
            else
            {
                minHeap.push(currentNum);
            }
            medianSoFar = (maxHeap.top()/1.0+minHeap.top()/1.0)/2;
        
        }
        else if(minHeap.size()>maxHeap.size())
        {
            if(currentNum > medianSoFar)
            {
                int x = minHeap.top();
                minHeap.pop();
                maxHeap.push(x);
                minHeap.push(currentNum);
            }
            else
            {
                maxHeap.push(currentNum);
            }
            medianSoFar = (maxHeap.top()/1.0+minHeap.top()/1.0)/2;
        }
        else if(maxHeap.size()==minHeap.size())
        {   
            if(currentNum < medianSoFar)
            {
                maxHeap.push(currentNum);
                medianSoFar = maxHeap.top()/1.0;
            }
            else
            {
                minHeap.push(currentNum);
                medianSoFar = minHeap.top()/1.0;
            } 
        }
    }
    double findMedian() {
        return medianSoFar;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */