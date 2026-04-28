Assignment1-Circular Buffer
واجب مادة تنفيذ مخزن دائري بلغة C

فكرة المخزن الدائري 
المخزن الدائري عبارة عن مصفوفة بحجم ثابت , ولكن مؤشرات القراءة و الكتابة تعود لأول المصفوفة بعد انتهائها .

يستخدم مؤشرات :
•	مؤشر القراءة : head
•	مؤشر الكتابة : tail
•	لمعرفة عدد العناصر الموجودة :count

الدوال المستخدمة (التوابع):
الوظيفة	الدالة
تهيئة المخازن وتصفير المؤشرات	Init()
فحص اذا كان المخزن ممتلئ	isFull()
فحص اذا كان المخزن فارغ	isEmpty()
كتابة حرف في المخزن ,تطبع Buffer Overflow اذا كان المخزن ممتلئ	write()
قراءة حرف في المخزن ,تطبع Buffer Underflow اذا كان المخزن فارغ	read()

طريقة التشغيل :
1-	يمكن عمل run  بشكل طبيعي
2-	gcc program.c -o program ثم ./program 
ادخل اسمك , سيفوم البرنامج بإضافة اللاحقة CE-ESY ثم سيقرأه ويطبعه ويخزنه في المخزن .


الاختبار :
تم تجربة حالتين في هذا البرنامج 
1-	حجم المخزن الدائري اكبر من النص المدخل :
//size 20
Enter your name : omarshamaa
The full text is : omarshamaa CE-ESY
text size = 20
text length = 17
Write every letter in buffer
Read from buffer :
omarshamaa CE-ESY
The buffer is empty.

2-	حجم المخزن الدائري اصغر من النص المدخل :
//size 8
Enter your name : omarshamaa
The full text is : omarshamaa CE-ESY 
text size = 8 
text length = 17 
write every letter in bufferBuffer overFlow! cant add 'a' 
Buffer overFlow! cant add 'a' 
Buffer overFlow! cant add ' ' 
Buffer overFlow! cant add 'C'' 
Buffer overFlow! cant add 'E'' 
Buffer overFlow! cant add ' ' 
Buffer overFlow! cant add 'E' 
Buffer overFlow! cant add 'S' 
Buffer overFlow! cant add 'Y' 
Read from buffer :
omarsham



أعداد الطالب : محمد عمر فادي الشمعه
