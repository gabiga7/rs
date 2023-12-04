use std::collections::HashSet;
use std::sync::{Arc, Mutex};
use std::thread;

fn main() {
    let days = vec!["Lundi", "Mardi", "Vendredi"];
    let forbidden_combinations = vec![("Lundi", "Vendredi")]; // Exemple de règles d'interdiction

    let forbidden_set: HashSet<(&str, &str)> = forbidden_combinations.into_iter().collect();

    let results = Arc::new(Mutex::new(Vec::new()));
    let mut handles = vec![];

    for i in 0..days.len() {
        let days_clone = days.clone();
        let results_clone = Arc::clone(&results);
        let forbidden_clone = forbidden_set.clone();

        let handle = thread::spawn(move || {
            for j in 0..days_clone.len() {
                if i != j && !forbidden_clone.contains(&(days_clone[i], days_clone[j])) {
                    let mut res = results_clone.lock().unwrap();
                    res.push((days_clone[i], days_clone[j]));
                }
            }
        });

        handles.push(handle);
    }

    for handle in handles {
        handle.join().unwrap();
    }

    let results = Arc::try_unwrap(results).unwrap().into_inner().unwrap();
    for combination in results {
        println!("{} - {}", combination.0, combination.1);
    }
}
