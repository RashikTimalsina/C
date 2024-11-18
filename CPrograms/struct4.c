int main(){

    struct student{
        char name[20];
        int roll_no;
    };


    struct student *ptr{
        ptr=(struct student)* malloc(sizeof(struct student));
    };

}