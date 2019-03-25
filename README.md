# gerenciamentomemoria

## [Testing Memory Allocators: ptmalloc2 vs tcmalloc vs hoard vs jemalloc While Trying to Simulate Real-World Loads](http://ithare.com/testing-memory-allocators-ptmalloc2-tcmalloc-hoard-jemalloc-while-trying-to-simulate-real-world-loads/)
- [tc malloc](http://goog-perftools.sourceforge.net/doc/tcmalloc.html)
- [hoard malloc](http://hoard.org/)
- [jem malloc](http://jemalloc.net/)

## [Mesh: Compacting Memory Management for C/C++ Applications](https://arxiv.org/abs/1902.04738)
Programs written in C/C++ can suffer from serious memory fragmentation, leading
to low utilization of memory, degraded performance, and application failure due
to memory exhaustion. This paper introduces Mesh, a plug-in replacement for
malloc that, for the first time, eliminates fragmentation in unmodified C/C++
applications. Mesh combines novel randomized algorithms with widely-supported
virtual memory operations to provably reduce fragmentation, breaking the
classical Robson bounds with high probability. Mesh generally matches the
runtime performance of state-of-the-art memory allocators while reducing memory
consumption; in particular, it reduces the memory of consumption of Firefox by
16% and Redis by 39%.

