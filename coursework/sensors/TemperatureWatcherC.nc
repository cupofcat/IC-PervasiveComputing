module TempeartureWatcherC
{
  provides interface ValueWatcher<uint16_t>;
}

implementation
{
  uint16_t trigger;
  uint16_t size;
  
  uint16_t* values;
  uint16_t left = 0
  uint16_t right = 0;
  uint16_t min, max;

  uint16_t count = 0;
  bool just_started = TRUE;
  
  command void start(uint16_t change_trigger_, uint16_t size_)
  {
    trigger = change_trigger;
    size = size_;
    values = malloc(size, sizeof(uint16_t));
  }
  
  command void reset()
  {
    just_started = TRUE;
    count = 1;
  }
  
  command void add_value(uint16_t value)
  {
    if (just_started)
    {
      min = value;
      max = value;
    }

    right = (right + 1) % size;
    if (right == left)
    {
      left = (left + 1) % size;
    }

    values[right] = value;
    
    if (values[left] < min)
    {
      min = values[left];
    }
    if (values[right] > max)
    {
      max = values[right];
    }
    
    if (max - min >= trigger )
    {
      signal alert();
    }
    
    if (count++ > size)
    {
      min = values[left];
      max = values[right];
      count = 0;
    }
  }
}