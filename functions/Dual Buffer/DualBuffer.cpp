//'Producer' buffer is putting values into its buffer. It then waits for the processing buffer to finish processing before sending over/swapping buffers, 
  //sending its new data to processor function and taking processor buffer and replacing values in next iteration
// 'Consumer' or Processing buffer is processing the values the producer buffer is giving it
