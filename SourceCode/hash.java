import java.util.*;


public class hash
{

    public static void main(String[] args)
    {
        Map<String,Integer>phonebook = new HashMap();
        Set<Integer>id = new HashSet();

        // phonebook.put("Alhagie", 612231);
        // phonebook.put("Aji", 702);

        id.add(123);
        id.add(987);

        // for(String i : phonebook.keySet())
        // {
        //     System.out.println(i + ":" + phonebook.get(i));
        // }

        for(Integer i : id)
        {
            System.out.println(i);
        }

    }
}
