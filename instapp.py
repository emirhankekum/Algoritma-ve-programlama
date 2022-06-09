
import instaloader
ig = instaloader.Instaloader()
profile = input("kullanıcı adı: ")

ig.download_profile(profile, profile_pic_only = True)