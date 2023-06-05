# IGM-Singleton

## Usage

To make any class a singleton, simply inherit from the Singleton base class instead of MonoBehaviour, like so:

```c#
public class MySingleton : Singleton<MySingleton>
{
    // (Optional) Prevent non-singleton constructor use.
    protected MySingleton() { }
 
    // Then add whatever code to the class you need as you normally would.
    public string MyTestString = "Hello world!";
}
```

Now you can access all public fields, properties and methods from the class anywhere using <ClassName>.Instance:

```c#
public class MyClass : MonoBehaviour
{
    private void OnEnable()
    {
        Debug.Log(MySingleton.Instance.MyTestString);
    }
}
```

## Source

- [Singleton - Unify Community](https://web.archive.org/web/20201112042127/https://wiki.unity3d.com/index.php/Singleton)
- [GetOrAddComponent - Unify Community](https://web.archive.org/web/20210126224926/https://wiki.unity3d.com/index.php/GetOrAddComponent)
