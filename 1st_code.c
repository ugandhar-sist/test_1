    #include <stdio.h>
    int main()
    {
        int a[10], n, i, j,t, s=1,z;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        z=n;
        a[n-1] = t; // add t to int line
        for(j=0; j<100; j++)
        {
           if(z != 0)
            {
        if(a[0] > a[1])
        {
            a[n-1] = a[0];
            for(i=0; i<n-1; i++)
            {
                if(i != n-2)
                    {
                    a[i] = a[i+1];
                    }
                a[i] = t;
            }
            s++;
        }
        for(i=0; i<n-1; i++)
        {
            a[i] = a[i+1];
        }
        z = sizeof(a);
        s++;
        }
        }

        printf("%d", s);
    }
