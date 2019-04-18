class vector{
  int cs;     //current size
  int ms;     //max size
  int *arr;
public :
        vector (int ds=0)
        {
          cs=0;
          ms=ds;
          arr= new int[ms];
        }

        void push_back(int *data)     //push_back()
        {
          if(cs==ms)
          {
            int *oldarr=arr;
            arr=new int[2*ms];
            ms*=2;
             for(int i=0;i<cs;++i)
              {
                arr[i]=oldarr[i];
              }
              delete [] oldarr;

          }
          arr[cs]=data;
          cs++;
        }

        void pop_back()     //pop_back()
        {
          if(cs>0)
          cs--;
        }
        int capacity()    //capacity()
        {
          return ms;
        }
        void operator [](int i)
        {
          return arr[i];
        }
}
