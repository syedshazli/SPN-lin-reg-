//Initialise CPU Set objects to pin our threads to
//Zero out these CPU sets 

//State which core you want the CPU set to run on using CPU_SET(# core, CPU Set Object)

// Create your threads
//Use pthread_set_affinity to assign your function and the specific core/CPU set to run
