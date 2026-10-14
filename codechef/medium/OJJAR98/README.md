# OJJAR98

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Rules of Hooks
#### Task: Fix the Hook Usage

In our IDE you are given a component that violates the Rules of Hooks. Identify the mistake and correct the code.

Once done, submit your solution to verify correctness.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T06:20:49.465Z  

```cpp
                                                                            value={name}
                                                                                    onChange={(e) => setName(e.target.value)}
                                                                                          />

                                                                                                <label htmlFor={`${uniqueId}-email`}>Email:</label>
                                                                                                      <input
                                                                                                              type="email"
                                                                                                                      id={`${uniqueId}-email`}
                                                                                                                              className="input-field"
                                                                                                                                      value={email}
                                                                                                                                              onChange={(e) => setEmail(e.target.value)}
                                                                                                                                                    />

                                                                                                                                                          <button type="submit" className="submit-button">Submit</button>
                                                                                                                                                              </form>
                                                                                                                                                                );
                                                                                                                                                                }

                                                                                                                                                                function App() {
                                                                                                                                                                  return <SimpleForm name="Codechef" email="codechef@gmail.com" />;
                                                                                                                                                                  }

                                                                                                                                                                  export default App;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR98)