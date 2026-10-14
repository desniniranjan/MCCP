  const [count , setCount] = useState(0);
  return (
    <>
      <p>You clicked {count} times</p>
      <button onClick={() => setCount(count+1)}>
        Click me
      </button>
    </>
  );
}

import {useState} from 'react';
function App() {
export default App;