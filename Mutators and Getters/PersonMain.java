public class PersonMain {

    public static void main(String[] args) {

        Person objPerson1 = new Person("Jenny", "Alba");
        Person objPerson2 = new Person("Michael", "Culumeda", "Castrence");

        objPerson2.showName();
	objPerson1.showName();
        System.out.println(objPerson1.getFirst() + " " + objPerson1.getLast());
	System.out.println(objPerson2.getFirst() + " " + objPerson2.getMiddle() + " " + objPerson2.getLast());

        //System.out.println(objPerson1.strFirst + " " + objPerson1.strLast);

    }  // public static void main(String[] args)

}  // public class PersonMain