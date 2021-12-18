#include "../tqdm.h"
#include <chrono>
#include <thread>  

int main()
{

    tqdm bar;
    bar.set_label("Example Bar");

    for(int i = 0; i < 100; ++i)
    {
        bar.progress(i, 100);
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    bar.finish();

    return 0;
}
