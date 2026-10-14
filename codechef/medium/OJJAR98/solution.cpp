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