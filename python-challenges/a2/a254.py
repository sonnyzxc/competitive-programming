# Create the class CarRecord. The CarRecord constructor should include: VehicleID, Registration, DateOfRegistration, EngineSize and PurchasePrice.
# Then create an Array of objects of class CarRecord.
class CarRecord:
    def __init__(self, VehicleID, Registration, DateOfRegistration, EngineSize, PurchasePrice):
        self.VehicleID = VehicleID
        self.Registration = Registration
        self.DateOfRegistration = DateOfRegistration
        self.EngineSize = EngineSize
        self.PurchasePrice = PurchasePrice


car1 = CarRecord(1, "ABC123", "21/01/2012", 1.6, 20000)
car2 = CarRecord(2, "DAB251", "16/12/2016", 2.2, 22620)
car3 = CarRecord(3, "AGB126", "08/11/2018", 1.2, 18920)
car4 = CarRecord(4, "JGT163", "01/08/2021", 2.3, 30020)

l = []
l.append(car1)
l.append(car2)
l.append(car3)
l.append(car4)

print(l[0].VehicleID)  # 1
print(l[0].Registration)  # ABC123
